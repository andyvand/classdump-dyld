/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/FirefoxImporter.h>
#import <Safari/BrowserCredentialImporter.h>

@protocol BrowserCredentialImporterDelegate;
@class NSString;

@interface FirefoxCredentialImporter : FirefoxImporter <BrowserCredentialImporter> {

	NSString* _masterPassword;
	char _shouldSendImporterRequiresMasterPassword;
	id<BrowserCredentialImporterDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setShouldSendImporterRequiresMasterPassword:(char)arg1 ;
-(void)importCredentialsWithDelegate:(id)arg1 ;
-(void)cancelCredentialImport;
-(void)setMasterPassword:(id)arg1 ;
-(void)retryCredentialImport;
-(void)_importCredentials;
-(id)_encryptedCredentials;
-(id)init;
@end

