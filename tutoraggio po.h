template <class T>
Class Coda{
	private:
		unsigned size,capacity;
		T* q;
	public:
		Coda(unsigned c): capacity(c),size(0)
		{
			q=new T[capacity];
		}
		~Coda(){del[] q}
		Coda(Coda& c):size(c.size),capacity(c.capacity)
		{
			q=new T[capacity];
			for(int i=0;i<size;i++)
				q[i]=c.q[i];
		}
		Coda& operator=(Coda& c)
		{
			if(this!=&c)
			{
				del[] q;
				size=c.size;
				capacity=c.capacity;
				q=new T[capacity];
				for(int i=0;i<size;i++)
					q[i]=c.q[i];
			}
			return *this;
		}
		void push(T e)
		{
			if(size<capacity)
				q[size++]=e;
			else{
				T* p=new T[capacity*2];
				for(int i=0;i<size;i++)
					p[i]=q[i];
				capacity*=2;
				p[size++]=e;
				del[]q;
				q=p;
			}
		}
		T pop()
		{
			if(size){
				T e=q[0];
				for(int i=1;i<size;i++)
					q[i-1]=q[i];
			q[size--]=0;
			
			return true;
			}
			return false
		}
		
		
}

//push con priorità

...
void push(T e)
{
	if(size<capacity){
		int x=0;
		for(int i=size-1;i>=0 && x==-1;i--)
			if(q[i]==-e)
				x=i;
			for(int i=size;i>x;i--)
				q[i]=q[i-1];
			q[x]=e;
	}
}
				
	
		
				
