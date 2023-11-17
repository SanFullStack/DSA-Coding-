class Solution 
{
	public :
		
		int mySqrt(int x)
		{
			int s = x;
			while ( x != 0 )
			{
				for ( int i=s/2; i>0; i-- )
				{
					if ( x%i == 0 )
					{
						return i;
					}
					else
					{
						s = s/2;						
					}
				}
			}
			
		}
};