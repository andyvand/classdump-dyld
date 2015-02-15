/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:54:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Address Book Plug-Ins/CardDAVPlugin.sourcebundle/Contents/MacOS/CardDAVPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSImage, NSString;


@protocol CDXBrandingProvider <NSObject>
@property (readonly) NSImage * brandIcon; 
@property (readonly) NSString * brandName; 
@property (readonly) NSString * userNameFieldLabel; 
@property (readonly) char isServerSettingsTabHidden; 
@property (readonly) char isAccountDescriptionFieldEditable; 
@property (readonly) char isUserNameFieldEditable; 
@property (readonly) char isPasswordFieldHidden; 
@property (readonly) char isRefreshContactsButtonHidden; 
@property (readonly) char isEditAccountButtonHidden; 
@property (readonly) char supportsDataMigration; 
@required
-(char)isPasswordFieldHidden;
-(char)isAccountDescriptionFieldEditable;
-(char)isUserNameFieldEditable;
-(char)isServerSettingsTabHidden;
-(char)isEditAccountButtonHidden;
-(char)isRefreshContactsButtonHidden;
-(NSString *)userNameFieldLabel;
-(char)supportsDataMigration;
-(NSImage *)brandIcon;
-(NSString *)brandName;

@end
