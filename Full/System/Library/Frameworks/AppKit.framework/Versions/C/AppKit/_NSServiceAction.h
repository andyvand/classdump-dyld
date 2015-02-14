/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSKeyboardShortcut;


@protocol _NSServiceAction <NSObject>
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
@required
-(void)setKeyEquivalent:(id)arg1;
-(NSString *)title;
-(NSString *)bundleIdentifier;
-(NSString *)keyEquivalent;
-(NSString *)bundlePath;
-(NSString *)localizedTitle;
-(NSString *)localizedCategoryTitle;
-(void)resetToDefaultAvailability;
-(void)resetToDefaultKeyboardShortcut;
-(NSKeyboardShortcut *)defaultKeyboardShortcut;
-(NSKeyboardShortcut *)keyboardShortcut;
-(void)setKeyboardShortcut:(id)arg1;
-(NSString *)categoryTitle;
-(char)isRestricted;
-(NSString *)localizedServiceDescription;
-(char)isWorkflow;
-(char)isAvailableInContextMenu;
-(void)setIsAvailableInContextMenu:(char)arg1;
-(char)isAvailableInServicesMenu;
-(void)setIsAvailableInServicesMenu:(char)arg1;
-(char)isSpellChecker;

@end

