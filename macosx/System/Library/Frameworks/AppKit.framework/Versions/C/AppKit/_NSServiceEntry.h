/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/_NSServiceAction.h>

@class NSString, NSKeyboardShortcut, NSArray;

@interface _NSServiceEntry : NSObject <_NSServiceAction> {

	NSString* menuItemTitle;
	NSString* bundleIdentifier;
	NSString* bundlePath;
	NSString* executablePath;
	NSString* originalTitle;
	NSString* defaultTitle;
	NSString* localizedTitleWithoutSubstitutions;
	NSKeyboardShortcut* defaultKeyboardShortcut;
	NSKeyboardShortcut* keyboardShortcut;
	NSString* message;
	NSString* filter;
	NSString* portName;
	NSArray* sendPasteboardTypes;
	NSArray* sendFileTypes;
	NSArray* returnTypes;
	NSString* userData;
	NSArray* languages;
	NSArray* _serviceFilters;
	NSString* localizedServiceDescription;
	float timeout;
	unsigned char uuid[16];
	struct {
		unsigned track : 1;
		unsigned hadServiceFilterInPlist : 1;
		unsigned isSpellChecker : 1;
		unsigned filterRequireFilePath : 1;
		unsigned isWorkflow : 1;
		unsigned showApplicationNameWithMenuItemTitle : 1;
		unsigned activeInServicesMenu : 1;
		unsigned activeInContextMenu : 1;
		unsigned serviceCategory : 5;
		unsigned checkedServiceDescription : 1;
		unsigned restricted : 1;
		unsigned reserved : 17;
	}  _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSKeyboardShortcut * defaultKeyboardShortcut; 
@property (nonatomic,copy) NSKeyboardShortcut * keyboardShortcut; 
@property (nonatomic,readonly) NSString * categoryTitle; 
@property (nonatomic,readonly) NSString * localizedCategoryTitle; 
@property (nonatomic,readonly) NSString * bundlePath; 
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) char isRestricted; 
@property (nonatomic,readonly) NSString * localizedServiceDescription; 
@property (nonatomic,readonly) char isWorkflow; 
@property (assign,nonatomic) char isAvailableInContextMenu; 
@property (assign,nonatomic) char isAvailableInServicesMenu; 
@property (nonatomic,copy) NSString * keyEquivalent; 
@property (nonatomic,readonly) char isSpellChecker; 
-(void)dealloc;
-(NSString *)description;
-(void)setKeyEquivalent:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)bundleIdentifier;
-(NSString *)keyEquivalent;
-(NSString *)bundlePath;
-(NSString *)localizedTitle;
-(char)hasSendOrReturnTypes;
-(id)combinedSendTypes;
-(NSString *)localizedCategoryTitle;
-(unsigned long long)typeCategory;
-(id)menuItemTitle;
-(long long)compareServiceEntryByLocalizedTitle:(id)arg1 ;
-(void)flushCachedMenuItemTitle;
-(id)titleForTracking;
-(id)serviceIdentifier;
-(void)applyServicesPreferences:(id)arg1 ;
-(char)hasKeyboardShortcut;
-(id)servicePreferences;
-(void)resetToDefaultAvailability;
-(void)resetToDefaultKeyboardShortcut;
-(unsigned long long)_inferServiceCategory;
-(unsigned long long)combinedSendTypeCount;
-(NSKeyboardShortcut *)defaultKeyboardShortcut;
-(NSKeyboardShortcut *)keyboardShortcut;
-(void)setKeyboardShortcut:(NSKeyboardShortcut *)arg1 ;
-(NSString *)categoryTitle;
-(char)isRestricted;
-(NSString *)localizedServiceDescription;
-(char)isWorkflow;
-(char)isAvailableInContextMenu;
-(void)setIsAvailableInContextMenu:(char)arg1 ;
-(char)isAvailableInServicesMenu;
-(void)setIsAvailableInServicesMenu:(char)arg1 ;
-(char)isSpellChecker;
-(char)hasSendTypes;
-(char)hasReturnTypes;
-(unsigned)enableStatus;
@end

