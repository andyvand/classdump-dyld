/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdate.framework/Versions/A/SoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SoftwareUpdate/SoftwareUpdate-Structs.h>
#import <SoftwareUpdate/SUDownloadServiceClient.h>

@protocol SUDownloadServiceClient <NSObject>
@end


@class NSXPCConnection, NSString;

@interface SUDownloadServiceClient : NSObject <SUDownloadServiceClient> {

	NSXPCConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)authorizeForUpdating:(AuthorizationOpaqueRefRef)arg1 overConnection:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)downloadedUpdatesDidChange:(id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
@end

