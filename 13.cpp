enum RomanValue{I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000 };

class Solution {
public:
    int romanToInt(string s) {

        int answer = 0;
        int previous = 0;

        for (char c : s) {
            int value = 0;
            switch (c) {
                case 'I': value = RomanValue::I; break;
                case 'V': value = RomanValue::V; break;
                case 'X': value = RomanValue::X; break;
                case 'L': value = RomanValue::L; break;
                case 'C': value = RomanValue::C; break;
                case 'D': value = RomanValue::D; break;
                case 'M': value = RomanValue::M; break;
            }

            if (value > previous)
                answer += value - 2 * previous;
            else
                answer += value;

            previous = value;
        }

        return answer;
    }
};
