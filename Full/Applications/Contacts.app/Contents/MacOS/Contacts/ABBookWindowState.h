/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Contacts.app/Contents/MacOS/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSWindow, NSArray;

@interface ABBookWindowState : NSObject {

	NSString* _autosavePrefix;
	NSString* _autosaveName;
	NSWindow* _window;
	NSArray* _stateSavingObjects;

}

@property (nonatomic,copy) NSString * autosaveName;              //@synthesize autosaveName=_autosaveName - In the implementation block
-(void)setAutosaveNames;
-(void)setAutosaveNameOnObject:(id)arg1 ;
-(id)autosaveNameByAppendingComponent:(id)arg1 ;
-(id)initWithWindow:(id)arg1 autosavePrefix:(id)arg2 stateSavingObjects:(id)arg3 ;
-(void)dealloc;
-(void)setAutosaveName:(NSString *)arg1 ;
-(NSString *)autosaveName;
@end

