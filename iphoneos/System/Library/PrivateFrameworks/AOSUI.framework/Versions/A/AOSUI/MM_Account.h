/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AOSUI/AOSUI-Structs.h>
@class NSMutableArray, NSDictionary, NSWindow, NSMutableDictionary, NSImage, NSArray, NSString;

@interface MM_Account : NSObject {

	CFStringRef _accountID;
	NSMutableArray* _services;
	NSDictionary* _context;
	NSWindow* _parentWindow;
	char _suppressFailureSheets;
	NSMutableDictionary* _suppressedFailures;
	NSImage* _cachedImage;
	NSImage* _croppedImage;
	CGRect _imageCropRect;

}

@property (retain) NSArray * services;                                    //@synthesize services=_services - In the implementation block
@property (nonatomic,copy) NSString * displayName; 
@property (readonly) NSImage * image; 
@property (readonly) NSImage * editorImage; 
@property (assign) CGRect imageCropRect;                                  //@synthesize imageCropRect=_imageCropRect - In the implementation block
@property (readonly) NSDictionary * properties; 
@property (retain) NSDictionary * context;                                //@synthesize context=_context - In the implementation block
@property (retain) NSWindow * parentWindow;                               //@synthesize parentWindow=_parentWindow - In the implementation block
@property (retain) NSImage * cachedImage;                                 //@synthesize cachedImage=_cachedImage - In the implementation block
@property (retain) NSImage * croppedImage;                                //@synthesize croppedImage=_croppedImage - In the implementation block
@property (retain) NSMutableDictionary * suppressedFailures;              //@synthesize suppressedFailures=_suppressedFailures - In the implementation block
+(id)accountWithID:(id)arg1 ;
-(NSArray *)services;
-(void)setAccountName:(id)arg1 ;
-(void)handleAEEvents:(id)arg1 ;
-(void)didSelect;
-(void)didUnselect;
-(void)willSelect;
-(void)willUnselect;
-(void)willSignOutAccount;
-(void)didSignOutAccount;
-(void)suppressFailureSheets;
-(void)setCroppedImage:(NSImage *)arg1 ;
-(void)setImageCropRect:(CGRect)arg1 ;
-(id)initWithAccountID:(id)arg1 ;
-(void)_handleServiceFailureNotification:(id)arg1 ;
-(void)_fetchImageForAccount;
-(void)setServices:(NSArray *)arg1 ;
-(id)serviceWithID:(id)arg1 ;
-(void)_handleBeginMigrationNotification:(id)arg1 ;
-(void)_handleEndMigrationNotification:(id)arg1 ;
-(void)enableFailureSheetsAndShow:(char)arg1 ;
-(void)didBecomeActive;
-(void)didBecomeInactive;
-(void)willGainFocus;
-(void)willResignFocus;
-(CGRect)imageCropRect;
-(NSMutableDictionary *)suppressedFailures;
-(void)_handleServiceFailureForServiceID:(id)arg1 notification:(id)arg2 ;
-(void)setSuppressedFailures:(NSMutableDictionary *)arg1 ;
-(void)_setProgressStringForAccount:(id)arg1 service:(id)arg2 starting:(char)arg3 ;
-(void)setImage:(id)arg1 withCropRect:(CGRect)arg2 andCroppedImage:(id)arg3 ;
-(char)setPassword:(id)arg1 oldPassword:(id)arg2 ;
-(char)isPaidAccount;
-(char)preflightDelete:(id*)arg1 withWindow:(id)arg2 ;
-(NSImage *)croppedImage;
-(NSImage *)editorImage;
-(void)dealloc;
-(NSDictionary *)context;
-(NSImage *)image;
-(NSWindow *)parentWindow;
-(id)valueForProperty:(id)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setParentWindow:(NSWindow *)arg1 ;
-(NSDictionary *)properties;
-(void)setCachedImage:(NSImage *)arg1 ;
-(NSImage *)cachedImage;
-(id)accountID;
-(void)refresh;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ;
-(void)setContext:(NSDictionary *)arg1 ;
@end
