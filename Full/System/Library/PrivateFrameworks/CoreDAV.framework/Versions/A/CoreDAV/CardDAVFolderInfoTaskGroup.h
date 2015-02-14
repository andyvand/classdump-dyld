/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVContainerInfoTaskGroup.h>

@class NSSet;

@interface CardDAVFolderInfoTaskGroup : CoreDAVContainerInfoTaskGroup {

	NSSet* _directoryGatewayURLs;

}
-(void)dealloc;
-(id)initWithAccountInfoProvider:(id)arg1 containerURLs:(id)arg2 directoryGatewayURLs:(id)arg3 taskManager:(id)arg4 ;
-(int)containerInfoDepthForURL:(id)arg1 ;
-(id)_copyContainerWithURL:(id)arg1 andProperties:(id)arg2 ;
-(id)_copyContainerParserMappings;
@end

