class Solution {
    public String leetcode(String[] strs) {
        int ind=0,tempin=0;
        String check=strs[0];
        String temp="";
        if(strs.length==1)
        {
            return check;
        }
        else if(strs.length==0)
        {
            return "";
        }
        for(ind=0;ind<strs.length;ind++)
        {
            temp="";
            for(int in=0;in<strs[ind].length();in++)
            {
                if(check.length()>in)
                    break;
                if(check.charAt(in)!=strs[ind].charAt(in))
                {
                    break;
                }
                else
                {
                    temp+=strs[ind].charAt(in);
                }
            }
            check=temp;
        }
        return check;
    }
}