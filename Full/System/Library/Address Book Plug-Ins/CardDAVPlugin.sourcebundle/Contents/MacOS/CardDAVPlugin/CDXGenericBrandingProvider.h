/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:54:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Address Book Plug-Ins/CardDAVPlugin.sourcebundle/Contents/MacOS/CardDAVPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CardDAVPlugin/CDXBrandingProvider.h>

@class NSImage, NSString;

@interface CDXGenericBrandingProvider : NSObject <CDXBrandingProvider> {

	NSImage* _brandIcon;
	NSString* _brandName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSImage * brandIcon;                                 //@synthesize brandIcon=_brandIcon - In the implementation block
@property (readonly) NSString * brandName;                                //@synthesize brandName=_brandName - In the implementation block
@property (readonly) NSString * userNameFieldLabel; 
@property (readonly) char isServerSettingsTabHidden; 
@property (readonly) char isAccountDescriptionFieldEditable; 
@property (readonly) char isUserNameFieldEditable; 
@property (readonly) char isPasswordFieldHidden; 
@property (readonly) char isRefreshContactsButtonHidden; 
@property (readonly) char isEditAccountButtonHidden; 
@property (readonly) char supportsDataMigration; 
-(char)isPasswordFieldHidden;
-(char)isAccountDescriptionFieldEditable;
-(char)isUserNameFieldEditable;
-(char)isServerSettingsTabHidden;
-(char)isEditAccountButtonHidden;
-(char)isRefreshContactsButtonHidden;
-(id)initWithBrandName:(id)arg1 icon:(id)arg2 ;
-(NSString *)userNameFieldLabel;
-(char)supportsDataMigration;
-(NSImage *)brandIcon;
-(void)dealloc;
-(NSString *)brandName;
@end

