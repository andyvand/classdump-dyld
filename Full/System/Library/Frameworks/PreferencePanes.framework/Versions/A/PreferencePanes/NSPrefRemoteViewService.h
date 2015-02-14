/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/PreferencePanes.framework/Versions/A/PreferencePanes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PreferencePanes/PreferencePanes-Structs.h>
#import <ViewBridge/NSViewService.h>
#import <PreferencePanes/NSWindowDelegate.h>

@class NSPreferencePane, NSWindow, NSString;

@interface NSPrefRemoteViewService : NSViewService <NSWindowDelegate> {

	NSPreferencePane* _prefPane;
	NSWindow* _window;

}

@property (__weak) NSPreferencePane * prefPane;                     //@synthesize prefPane=_prefPane - In the implementation block
@property (__weak) NSWindow * window;                               //@synthesize window=_window - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPrefPane:(NSPreferencePane *)arg1 ;
-(NSPreferencePane *)prefPane;
-(unsigned long long)awakeFromRemoteView;
-(void)advanceToRunPhase;
-(void)dealloc;
-(void)invalidate;
-(NSWindow *)window;
-(void)loadView;
-(void)setWindow:(NSWindow *)arg1 ;
-(id)windowWillReturnFieldEditor:(id)arg1 toObject:(id)arg2 ;
@end

