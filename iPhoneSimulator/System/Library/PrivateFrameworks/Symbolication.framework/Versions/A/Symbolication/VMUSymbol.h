/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:42 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Versions/A/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSString, VMUSourceInfo;

@interface VMUSymbol : NSObject {

	NSString* _name;
	VMUSourceInfo* _sourceInfo;

}
-(id)initWithSymbolicator:(CSTypeRef)arg1 address:(unsigned long long)arg2 ;
-(id)sourceInfoForAddress:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)name;
@end

