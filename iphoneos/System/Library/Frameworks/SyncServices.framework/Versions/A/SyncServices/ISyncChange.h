/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SyncServices/SyncServices-Structs.h>
@interface ISyncChange : NSObject
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)changeWithType:(int)arg1 recordIdentifier:(id)arg2 changes:(id)arg3 ;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(id)entityName;
-(id)changes;
-(id)record;
-(id)recordIdentifier;
-(id)initWithChangeType:(int)arg1 recordIdentifier:(id)arg2 changes:(id)arg3 ;
@end

