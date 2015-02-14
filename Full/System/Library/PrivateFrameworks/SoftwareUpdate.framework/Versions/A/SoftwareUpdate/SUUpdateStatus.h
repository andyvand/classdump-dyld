/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdate.framework/Versions/A/SoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SoftwareUpdate/SoftwareUpdate-Structs.h>
#import <SoftwareUpdate/NSSecureCoding.h>
#import <SoftwareUpdate/NSCopying.h>

@class NSString, NSError;

@interface SUUpdateStatus : NSObject <NSSecureCoding, NSCopying> {

	NSString* _productKey;
	unsigned long long _installState;
	long long _activePhases;
	NSError* _error;
	unsigned long long _totalBytes;
	unsigned long long _downloadedBytes;
	double _estimatedTimeRemainingForDownload;
	double _installProgressPercent;
	double _estimatedTimeRemainingForInstall;
	NSString* _specialInstallStatus;

}

@property (copy,readonly) NSString * productKey;                                    //@synthesize productKey=_productKey - In the implementation block
@property (assign,nonatomic) unsigned long long installState;                       //@synthesize installState=_installState - In the implementation block
@property (assign,nonatomic) long long activePhases;                                //@synthesize activePhases=_activePhases - In the implementation block
@property (nonatomic,retain) NSError * error;                                       //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) unsigned long long totalBytes;                         //@synthesize totalBytes=_totalBytes - In the implementation block
@property (assign,nonatomic) unsigned long long downloadedBytes;                    //@synthesize downloadedBytes=_downloadedBytes - In the implementation block
@property (assign,nonatomic) double estimatedTimeRemainingForDownload;              //@synthesize estimatedTimeRemainingForDownload=_estimatedTimeRemainingForDownload - In the implementation block
@property (assign,nonatomic) double installProgressPercent;                         //@synthesize installProgressPercent=_installProgressPercent - In the implementation block
@property (assign,nonatomic) double estimatedTimeRemainingForInstall;               //@synthesize estimatedTimeRemainingForInstall=_estimatedTimeRemainingForInstall - In the implementation block
@property (nonatomic,copy) NSString * specialInstallStatus;                         //@synthesize specialInstallStatus=_specialInstallStatus - In the implementation block
@property (nonatomic,readonly) double progressPercent; 
@property (nonatomic,readonly) double estimatedTimeRemaining; 
+(id)stringForInstallState:(unsigned long long)arg1 ;
+(char)isActiveInstallState:(unsigned long long)arg1 ;
+(char)supportsSecureCoding;
-(unsigned long long)installState;
-(void)setInstallState:(unsigned long long)arg1 ;
-(double)estimatedTimeRemaining;
-(NSString *)productKey;
-(id)initWithProductKey:(id)arg1 ;
-(void)setTotalBytes:(unsigned long long)arg1 ;
-(void)setDownloadedBytes:(unsigned long long)arg1 ;
-(unsigned long long)totalBytes;
-(unsigned long long)downloadedBytes;
-(void)setActivePhases:(long long)arg1 ;
-(double)progressPercent;
-(double)installProgressPercent;
-(NSString *)specialInstallStatus;
-(long long)activePhases;
-(double)estimatedTimeRemainingForDownload;
-(double)estimatedTimeRemainingForInstall;
-(void)setSpecialInstallStatus:(NSString *)arg1 ;
-(void)setInstallProgressPercent:(double)arg1 ;
-(void)setEstimatedTimeRemainingForDownload:(double)arg1 ;
-(void)setEstimatedTimeRemainingForInstall:(double)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

