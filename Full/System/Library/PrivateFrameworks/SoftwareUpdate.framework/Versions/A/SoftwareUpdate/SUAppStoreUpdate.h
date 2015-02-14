/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdate.framework/Versions/A/SoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SoftwareUpdate/SoftwareUpdate-Structs.h>
#import <SoftwareUpdate/NSSecureCoding.h>

@class SUUpdateProduct, NSError, NSString, NSXPCConnection, NSAttributedString, NSArray, NSURL;

@interface SUAppStoreUpdate : NSObject <NSSecureCoding> {

	SUUpdateProduct* _product;
	NSError* _updateError;
	long long _lastState;
	dispatch_queue_sRef _q;
	NSString* _longDescriptionString;
	NSXPCConnection* _connection;

}

@property (retain,readonly) NSString * title; 
@property (retain,readonly) NSString * versionString; 
@property (retain,readonly) NSString * longDescription; 
@property (readonly) long long action; 
@property (retain,readonly) NSString * currentLocalization; 
@property (retain,readonly) NSAttributedString * licenseAgreement; 
@property (retain,readonly) NSAttributedString * firmwareWarning; 
@property (retain,readonly) NSString * productKey; 
@property (retain,readonly) NSArray * tags; 
@property (retain,readonly) id auxInfo; 
@property (readonly) char isRecommended; 
@property (readonly) char isRamped; 
@property (readonly) char allowedToUseInstallLater; 
@property (readonly) char isCritical; 
@property (readonly) long long autoInstallWithDelayInHours; 
@property (readonly) char showPostInstallNotification; 
@property (retain,readonly) NSString * customTitleForPostInstallNotification; 
@property (retain,readonly) NSString * customTextForPostInstallNotification; 
@property (retain,readonly) NSURL * customURLForPostInstallNotification; 
@property (retain,readonly) NSArray * applicationIdentifiersToClose; 
@property (retain,readonly) NSError * updateError; 
@property (readonly) char canRetry; 
@property (nonatomic,retain) NSString * longDescriptionString;                             //@synthesize longDescriptionString=_longDescriptionString - In the implementation block
@property (assign,nonatomic) NSXPCConnection * connection;                                 //@synthesize connection=_connection - In the implementation block
+(char)_connectToService;
+(char)supportsSecureCoding;
-(char)isCritical;
-(NSString *)longDescription;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSString *)productKey;
-(id)_product;
-(char)allowedToUseInstallLater;
-(NSArray *)applicationIdentifiersToClose;
-(id)_initWithProduct:(id)arg1 ;
-(void)_setCurrentStatus:(id)arg1 ;
-(char)isRecommended;
-(void)setLongDescriptionString:(NSString *)arg1 ;
-(NSString *)longDescriptionString;
-(NSString *)currentLocalization;
-(NSAttributedString *)licenseAgreement;
-(NSAttributedString *)firmwareWarning;
-(id)auxInfo;
-(char)showPostInstallNotification;
-(NSString *)customTitleForPostInstallNotification;
-(NSString *)customTextForPostInstallNotification;
-(NSURL *)customURLForPostInstallNotification;
-(void)_setProduct:(id)arg1 ;
-(char)isRamped;
-(long long)autoInstallWithDelayInHours;
-(NSError *)updateError;
-(char)canRetry;
-(NSXPCConnection *)connection;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSArray *)tags;
-(long long)action;
-(NSString *)title;
-(NSString *)versionString;
@end

