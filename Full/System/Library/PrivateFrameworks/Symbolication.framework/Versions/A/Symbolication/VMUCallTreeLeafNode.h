/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Versions/A/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Symbolication/VMUCallTreeNode.h>

@class NSCountedSet, NSString;

@interface VMUCallTreeLeafNode : VMUCallTreeNode {

	NSCountedSet* _addresses;
	NSString* _combinedName;

}
-(id)initWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned)arg3 numBytes:(unsigned long long)arg4 ;
-(void)getBrowserName:(id)arg1 ;
-(void)addAddress:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
@end

