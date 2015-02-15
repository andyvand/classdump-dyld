/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdate.framework/Versions/A/SoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSLock, NSMutableDictionary;

@interface SUServicesProxy : NSObject {

	NSLock* _serviceConnectionLock;
	NSMutableDictionary* _connectionsByServiceName;
	id _exportedObject;

}

@property (nonatomic,readonly) id<SUDownloadService> downloadService; 
@property (nonatomic,retain) id exportedObject;                                    //@synthesize exportedObject=_exportedObject - In the implementation block
+(id)sharedServicesProxy;
-(void)setExportedObject:(id)arg1 ;
-(id<SUDownloadService>)downloadService;
-(id)connectionForService:(id)arg1 ;
-(id)connectionWithServiceName:(id)arg1 ;
-(id)objectProxyForServiceName:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)exportedObject;
@end

