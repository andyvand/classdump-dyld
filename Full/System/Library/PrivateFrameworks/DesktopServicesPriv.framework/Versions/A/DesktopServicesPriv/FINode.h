/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DesktopServicesPriv.framework/Versions/A/DesktopServicesPriv
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DesktopServicesPriv/DesktopServicesPriv-Structs.h>
#import <DesktopServicesPriv/NSCopying.h>

@interface FINode : NSObject <NSCopying>
+(id)nodeFromNodeRef:(OpaqueNodeRefRef)arg1 ;
-(id)original;
-(void*)asTNode;
-(id)mutableCopy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(OpaqueNodeRefRef)nodeRef;
@end

