/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface GEOSearchProvider : NSObject {

	/*^block*/id _error;

}

@property (nonatomic,copy) id error;              //@synthesize error=_error - In the implementation block
-(void)search:(id)arg1 timeout:(long long)arg2 useBackgroundConnection:(char)arg3 finished:(/*^block*/id)arg4 refinement:(/*^block*/id)arg5 error:(/*^block*/id)arg6 isCompletions:(char)arg7 ;
-(void)dealloc;
-(void)cancel;
-(id)error;
-(void)setError:(id)arg1 ;
@end

