#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using namespace std::chrono;
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; ++j) {
        if (arr[j] < pivot) {
            ++i;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int main() {
    auto start = high_resolution_clock::now();

    vector<int> arr = {846,372,925,70,856,333,373,597,486,315,355,106,208,492,306,314,64,9,928,620,665,118,367,237,914,702,191,96,729,401,416,23,508,508,202,134,868,399,126,676,853,115,535,814,646,268,262,139,762,157,592,426,840,830,130,865,431,737,104,628,277,447,746,684,920,734,961,874,181,987,453,209,491,304,521,207,727,420,739,117,90,877,472,233,929,546,740,182,715,79,142,210,682,596,809,801,340,467,593,905,950,741,591,603,968,357,131,870,58,665,275,642,154,345,407,699,810,287,414,668,28,158,503,951,498,728,750,239,225,153,490,563,119,924,425,70,595,43,137,150,937,798,132,773,652,78,767,37,83,275,460,570,529,75,311,161,420,861,292,455,357,27,94,833,23,381,838,721,731,311,499,113,295,661,55,472,47,447,354,528,754,891,785,964,346,591,90,474,131,264,594,262,446,609,221,305,73,30,373,609,769,830,366,712,801,622,393,529,455,896,784,207,3,831,739,289,809,128,684,175,934,372,151,217,953,605,451,259,762,318,252,944,342,171,612,66,663,140,18,211,156,792,673,855,519,688,259,872,312,72,375,82,316,949,14,762,804,481,43,175,170,537,31,860,957,603,370,853,685,970,311,101,593,141,825,439,676,212,85,808,925,612,775,937,138,558,180,666,130,512,75,725,198,224,48,373,872,691,682,671,286,142,833,145,898,287,774,213,609,79,140,580,847,370,641,3,953,82,37,806,898,107,124,388,460,867,294,485,127,570,890,494,198,188,607,408,457,680,360,245,666,230,622,316,567,119,743,869,628,499,502,73,915,416,907,163,702,371,920,231,264,428,603,494,582,28,943,182,767,10,713,982,46,167,840,678,345,819,875,673,538,107,848,882,56,424,882,672,795,866,347,520,520,853,157,510,951,249,243,614,612,450,608,918,417,141,800,787,94,613,202,741,10,35,517,592,909,468,711,936,464,308,947,199,154,775,779,178,177,664,18,957,764,345,89,20,69,961,613,939,28,566,909,23,675,29,787,777,242,579,272,355,183,464,384,700,48,279,144,67,272,281,237,932,206,228,388,51,467,47,463,813,930,759,878,439,390,99,53,112,171,536,159,793,292,598,358,81,613,590,54,327,869,342,79,605,914,108,791,115,221,280,80,960,951,494,806,628,774,15,116,493,258,374,13,21,24,362,212,357,232,4,309,396,486,716,824,490,166,488,719,745,139,400,167,293,386,678,458,926,644,716,696,186,794,394,204,826,530,81,277,102,571,789,799,187,519,136,500,650,481,746,346,172,722,174,264,116,107,650,704,268,252,162,17,361,767,49,41,665,491,634,737,559,375,168,30,597,946,611,747,236,669,352,843,53,891,621,198,610,777,800,276,883,666,239,938,95,762,704,564,211,930,244,484,381,76};
    quickSort(arr, 0, arr.size() - 1);
    for (int num : arr) {
        cout << num << " ";
    }

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << endl<< "Waktu eksekusi: " << duration.count() << " mikrodetik" << endl;

    return 0;
}

