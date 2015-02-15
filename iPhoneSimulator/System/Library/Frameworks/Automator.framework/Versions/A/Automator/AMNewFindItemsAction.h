/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/AMAppleScriptAction.h>

@class AMApplicationDefinition;

@interface AMNewFindItemsAction : AMAppleScriptAction {

	AMApplicationDefinition* _applicationDefinition;

}

@property (retain) AMApplicationDefinition * applicationDefinition;              //@synthesize applicationDefinition=_applicationDefinition - In the implementation block
-(id)initWithDefinition:(id)arg1 fromArchive:(char)arg2 ;
-(void)setApplicationDefinition:(AMApplicationDefinition *)arg1 ;
-(AMApplicationDefinition *)applicationDefinition;
-(void)updateNameForApplication:(id)arg1 findingName:(id)arg2 ;
-(void)updateName;
-(void)dealloc;
-(void)awakeFromNib;
@end

