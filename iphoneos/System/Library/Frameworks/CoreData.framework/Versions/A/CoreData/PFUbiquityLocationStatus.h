/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PFUbiquityLocation, NSError;

@interface PFUbiquityLocationStatus : NSObject {

	char _isLive;
	char _isDeleted;
	char _isDownloaded;
	char _isDownloading;
	char _isUploaded;
	char _isUploading;
	char _isImported;
	char _isScheduled;
	char _isExported;
	char _isFailed;
	PFUbiquityLocation* _location;
	NSError* _error;
	unsigned long long _hash;
	long long _numBytes;
	long long _numNotifications;

}

@property (nonatomic,readonly) char isLive;                                //@synthesize isLive=_isLive - In the implementation block
@property (nonatomic,readonly) char isDeleted;                             //@synthesize isDeleted=_isDeleted - In the implementation block
@property (nonatomic,readonly) char isDownloaded;                          //@synthesize isDownloaded=_isDownloaded - In the implementation block
@property (assign,nonatomic) char isDownloading;                           //@synthesize isDownloading=_isDownloading - In the implementation block
@property (nonatomic,readonly) char isUploaded;                            //@synthesize isUploaded=_isUploaded - In the implementation block
@property (nonatomic,readonly) char isUploading;                           //@synthesize isUploading=_isUploading - In the implementation block
@property (nonatomic,readonly) char isScheduled;                           //@synthesize isScheduled=_isScheduled - In the implementation block
@property (nonatomic,readonly) char isImported;                            //@synthesize isImported=_isImported - In the implementation block
@property (nonatomic,readonly) char isExported;                            //@synthesize isExported=_isExported - In the implementation block
@property (nonatomic,readonly) char isFailed;                              //@synthesize isFailed=_isFailed - In the implementation block
@property (nonatomic,readonly) long long numBytes;                         //@synthesize numBytes=_numBytes - In the implementation block
@property (nonatomic,readonly) NSError * error;                            //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) long long numNotifications;                 //@synthesize numNotifications=_numNotifications - In the implementation block
-(char)isDownloading;
-(void)statusDidChange;
-(id)initWithLocation:(id)arg1 ;
-(void)checkFileURLState;
-(void)logWasImported;
-(void)logWasScheduled;
-(void)logImportWasCancelled;
-(void)logWasExported;
-(void)encounteredError:(id)arg1 ;
-(void)recoveredFromError;
-(char)isLive;
-(char)isDownloaded;
-(void)setIsDownloading:(char)arg1 ;
-(char)isUploaded;
-(char)isUploading;
-(char)isImported;
-(char)isExported;
-(char)isScheduled;
-(char)isFailed;
-(long long)numNotifications;
-(long long)numBytes;
-(id)init;
-(void)dealloc;
-(id)description;
-(unsigned long long)hash;
-(NSError *)error;
-(PFUbiquityLocation *)location;
-(char)isDeleted;
@end

