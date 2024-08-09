class Solution {
    public int strStr(String haystack, String needle) {
        char[] haystackCH = new char[haystack.length()];
        char[] needleCH = new char[needle.length()];
        for (int i = 0; i < haystack.length(); i++) {
            haystackCH[i] = haystack.charAt(i);
        }
        for (int i = 0; i < needle.length(); i++) {
            needleCH[i] = needle.charAt(i);
        }

        if (needle.length() == 0) {
            return 0;
        }
        
        for (int i = 0; i <= haystackCH.length - needleCH.length; i++) {
            int j;
            for (j = 0; j < needleCH.length; j++) {
                if (haystackCH[i + j] != needleCH[j]) {
                    break;
                }
            }
            if (j == needleCH.length) {
                return i; 
            }
        }
        
        return -1;

    }
}
