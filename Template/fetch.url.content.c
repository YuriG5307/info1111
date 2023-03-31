#include <stdio.h>
#include <curl/curl.h>

size_t write_callback(void *content, size_t size, size_t nmemb, void *userp) {
    fwrite(content, size, nmemb, (FILE *)userp);
    return size * nmemb;
}

int main() {
    CURL *curl_handle;
    CURLcode res;

    curl_global_init(CURL_GLOBAL_DEFAULT);
    curl_handle = curl_easy_init();
    if (curl_handle) {
        curl_easy_setopt(curl_handle, CURLOPT_URL, "https://www.1234567.com");
        curl_easy_setopt(curl_handle, CURLOPT_WRITEFUNCTION, write_callback);

        FILE *file = fopen("output.html", "wb");
        if (file) {
            curl_easy_setopt(curl_handle, CURLOPT_WRITEDATA, file);
            res = curl_easy_perform(curl_handle);
            fclose(file);

            if (res != CURLE_OK) {
                fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
            } else {
                printf("URL content saved to output.html\n");
            }
        } else {
            fprintf(stderr, "Unable to create output file.\n");
        }

        curl_easy_cleanup(curl_handle);
    }

    curl_global_cleanup();
    return 0;
}
