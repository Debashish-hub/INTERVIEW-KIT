/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 bool myCmp(Interval a, Interval b) {
            return a.start < b.start;
        }

vector<Interval> Solution::merge(vector<Interval> &intervals) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(intervals.size() < 2) {
                return intervals;
            }
            sort(intervals.begin(), intervals.end(), myCmp);
            int first = 0;
            for(int second = 1; second < intervals.size(); second++) {
                // There is overlap in intervals at first and second position.
                if(intervals[second].start <= intervals[first].end) {
                    // We merge the second interval into the first one and modify the first interval to reflect it. 
                    intervals[first].end = max(intervals[second].end, intervals[first].end);
                }
                else {
                    // No overlap between first and second. Move forward. 
                    ++first;
                    intervals[first].start = intervals[second].start;
                    intervals[first].end = intervals[second].end;
                }
            }
            intervals.erase(intervals.begin() + first + 1, intervals.end());
            return intervals;
}
