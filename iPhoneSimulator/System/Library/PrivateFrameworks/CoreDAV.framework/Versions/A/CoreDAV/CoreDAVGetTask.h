/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTask.h>

@interface CoreDAVGetTask : CoreDAVTask {

	id _appSpecificDataItemResult;
	char _forceNoCache;

}

@property (assign,nonatomic) id<CoreDAVTaskDelegate> delegate; 
@property (nonatomic,retain) id appSpecificDataItemResult;                  //@synthesize appSpecificDataItemResult=_appSpecificDataItemResult - In the implementation block
@property (assign,nonatomic) char forceNoCache;                             //@synthesize forceNoCache=_forceNoCache - In the implementation block
-(unsigned long long)cachePolicy;
-(void)dealloc;
-(id)description;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)appSpecificDataItemResult;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)httpMethod;
-(id)requestBody;
-(char)forceNoCache;
-(void)setAppSpecificDataItemResult:(id)arg1 ;
-(void)setForceNoCache:(char)arg1 ;
@end

