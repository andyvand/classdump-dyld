/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AOSUI/AOSUI-Structs.h>
@class NSWindow, NSString, NSMutableArray, NSImage;

@interface MMService : NSObject {

	CFStringRef _accountID;
	CFStringRef _serviceID;
	NSWindow* _parentWindow;
	char _itemEnabled;
	NSString* _infoButtonLabel;
	char _alwaysShowOptions;
	char _optionsButtonEnabled;
	NSString* _progressString;
	NSString* _statusString;
	long long _statusCode;
	char _determiningStatus;
	char _isPrimary;
	NSMutableArray* _aeArray;
	NSImage* _icon;

}

@property (assign) char itemEnabled;                                        //@synthesize itemEnabled=_itemEnabled - In the implementation block
@property (copy,readonly) NSString * accountID; 
@property (copy,readonly) NSString * serviceID; 
@property (retain,readonly) NSImage * icon; 
@property (readonly) NSString * displayName; 
@property (readonly) NSString * defaultAppName; 
@property (retain) NSString * infoButtonLabel;                              //@synthesize infoButtonLabel=_infoButtonLabel - In the implementation block
@property (assign) char alwaysShowOptions;                                  //@synthesize alwaysShowOptions=_alwaysShowOptions - In the implementation block
@property (assign) char optionsButtonEnabled;                               //@synthesize optionsButtonEnabled=_optionsButtonEnabled - In the implementation block
@property (retain) NSString * progressString;                               //@synthesize progressString=_progressString - In the implementation block
@property (retain) NSString * statusString;                                 //@synthesize statusString=_statusString - In the implementation block
@property (assign) long long statusCode;                                    //@synthesize statusCode=_statusCode - In the implementation block
@property (getter=isDeterminingStatus) char determiningStatus;              //@synthesize determiningStatus=_determiningStatus - In the implementation block
@property (readonly) char isPrimary;                                        //@synthesize isPrimary=_isPrimary - In the implementation block
@property (retain) NSWindow * parentWindow;                                 //@synthesize parentWindow=_parentWindow - In the implementation block
@property (retain) NSMutableArray * aeArray;                                //@synthesize aeArray=_aeArray - In the implementation block
-(char)isPrimary;
-(id)initWithServiceID:(id)arg1 forAccount:(id)arg2 ;
-(void)setAeArray:(NSMutableArray *)arg1 ;
-(NSString *)serviceID;
-(char)canEnable:(id*)arg1 ;
-(void)_postServiceStatusChangedNotification;
-(NSMutableArray *)aeArray;
-(void)handleAEEvents:(id)arg1 ;
-(void)invalidateService;
-(char)_isEnabledForDisplay;
-(char)isInactiveOrEnabled;
-(void)reconcileEnableStatus;
-(void)setEnabled:(char)arg1 creating:(char)arg2 withWindow:(id)arg3 ;
-(void)setEnabled:(char)arg1 creating:(char)arg2 isPrimary:(char)arg3 withWindow:(id)arg4 ;
-(char)canEnable;
-(char)hasDataToMerge;
-(void)_setEnabled:(char)arg1 withOptions:(int)arg2 ;
-(NSString *)defaultAppName;
-(void)setItemEnabled:(char)arg1 ;
-(void)setInfoButtonLabel:(NSString *)arg1 ;
-(void)setAlwaysShowOptions:(char)arg1 ;
-(void)setOptionsButtonEnabled:(char)arg1 ;
-(void)setProgressString:(NSString *)arg1 ;
-(char)determiningStatus;
-(void)setDeterminingStatus:(char)arg1 ;
-(void)_serviceFailed:(id)arg1 ;
-(char)itemEnabled;
-(NSString *)infoButtonLabel;
-(char)alwaysShowOptions;
-(char)optionsButtonEnabled;
-(NSString *)progressString;
-(char)isDeterminingStatus;
-(void)dealloc;
-(char)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSImage *)icon;
-(NSWindow *)parentWindow;
-(id)valueForProperty:(id)arg1 ;
-(NSString *)displayName;
-(void)setParentWindow:(NSWindow *)arg1 ;
-(id)properties;
-(void)_setEnabled:(char)arg1 ;
-(void)setStatusString:(NSString *)arg1 ;
-(NSString *)statusString;
-(void)showMoreInfo:(id)arg1 ;
-(void)setStatusCode:(long long)arg1 ;
-(NSString *)accountID;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ;
-(long long)statusCode;
@end

