/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTask.h>

@class NSArray;

@interface CoreDAVACLTask : CoreDAVTask {

	NSArray* _accessControlEntities;

}

@property (assign,nonatomic) id<CoreDAVACLTaskDelegate> delegate; 
@property (nonatomic,retain) NSArray * accessControlEntities;                  //@synthesize accessControlEntities=_accessControlEntities - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)httpMethod;
-(id)requestBody;
-(NSArray *)accessControlEntities;
-(void)setAccessControlEntities:(NSArray *)arg1 ;
-(id)initWithAccessControlEntities:(id)arg1 atURL:(id)arg2 ;
@end

