/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, CLALSRequester;

@interface BatchData : NSObject {

	NSArray* _data;
	unsigned long long _count;
	unsigned long long _index;
	double _startTime;
	CLALSRequester* _requester;

}

@property (nonatomic,retain) NSArray * data;                          //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) CLALSRequester * requester;              //@synthesize requester=_requester - In the implementation block
-(id)initWithData:(id)arg1 startTime:(double)arg2 requester:(id)arg3 ;
-(CLALSRequester *)requester;
-(void)setRequester:(CLALSRequester *)arg1 ;
-(void)dealloc;
-(NSArray *)data;
-(void)setData:(NSArray *)arg1 ;
@end
