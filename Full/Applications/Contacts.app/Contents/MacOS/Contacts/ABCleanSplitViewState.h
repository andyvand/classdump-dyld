/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:26:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Contacts.app/Contents/MacOS/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Contacts/ABBookStateSaving.h>

@class NSString, ABCleanSplitViewConstraints, ABCleanGroupsPaneVisibility;

@interface ABCleanSplitViewState : NSObject <ABBookStateSaving> {

	NSString* _identifier;
	NSString* _autosaveName;
	ABCleanSplitViewConstraints* _constraints;
	ABCleanGroupsPaneVisibility* _groupsPaneVisibility;

}

@property (copy) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSString * autosaveName;                           //@synthesize autosaveName=_autosaveName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)stateRepresentation;
-(void)restoreGroupsPaneWidth:(id)arg1 ;
-(void)restoreContactsPaneWidth:(id)arg1 ;
-(void)restoreGroupPaneHidden:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 constraints:(id)arg2 groupsPaneVisibility:(id)arg3 ;
-(void)saveState;
-(void)restoreState;
-(void)dealloc;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setAutosaveName:(NSString *)arg1 ;
-(NSString *)autosaveName;
@end

