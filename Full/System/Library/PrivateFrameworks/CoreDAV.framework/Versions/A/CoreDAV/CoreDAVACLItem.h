/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVACLItem : CoreDAVItem {

	NSMutableSet* _accessControlEntities;

}

@property (nonatomic,retain) NSMutableSet * accessControlEntities;              //@synthesize accessControlEntities=_accessControlEntities - In the implementation block
+(id)copyParseRules;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSMutableSet *)accessControlEntities;
-(void)addACE:(id)arg1 ;
-(void)setAccessControlEntities:(NSMutableSet *)arg1 ;
-(id)notGrantedSubsetOfACEs:(id)arg1 ;
-(id)liveACEs;
@end

