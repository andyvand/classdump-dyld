/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SecurityInterface.framework/Versions/A/SecurityInterface
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSDictionary;

@interface SFPasswordAsstModel : NSObject {

	unsigned _minLength;
	unsigned _maxLength;
	unsigned _curLength;
	unsigned _setSize;
	double _entropy;
	NSMutableArray* _errorMessages;
	long long mPWAContextHandle;
	NSDictionary* mPWAPolicy;

}
-(void)calculate:(id)arg1 :(id)arg2 :(double*)arg3 :(int*)arg4 ;
-(long long)pwaContextHandle;
-(id)pwaPolicy;
-(double)entropy;
-(void)extractErrors:(id)arg1 ;
-(id)localizedError:(id)arg1 ;
-(void)addErrorMessage:(id)arg1 ;
-(unsigned)minLength;
-(void)setMinLength:(unsigned)arg1 ;
-(unsigned)curLength;
-(unsigned)setSize;
-(id)errorMessages;
-(id)remapCracklibError:(id)arg1 ;
-(unsigned)maxLength;
-(void)setMaxLength:(unsigned)arg1 ;
-(id)init;
-(void)dealloc;
-(void)clear;
@end

