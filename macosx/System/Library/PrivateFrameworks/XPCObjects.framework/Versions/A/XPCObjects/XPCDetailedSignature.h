/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/XPCObjects.framework/Versions/A/XPCObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface XPCDetailedSignature : NSObject {

	unsigned long long _argumentCount;
	Class* _classes;

}
+(id)signatureWithArgumentCount:(unsigned long long)arg1 classes:(Class)arg2 ;
+(id)signatureWithoutArguments;
-(Class)argumentClassAtIndex:(unsigned long long)arg1 ;
-(id)initWithArgumentCount:(unsigned long long)arg1 ;
-(void)setClass:(Class)arg1 forArgumentAtIndex:(unsigned long long)arg2 ;
-(void)dealloc;
@end

