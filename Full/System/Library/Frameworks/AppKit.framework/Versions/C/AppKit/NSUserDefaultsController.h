/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSController.h>

@class NSUserDefaults, NSMutableDictionary, NSDictionary;

@interface NSUserDefaultsController : NSController {

	NSUserDefaults* _defaults;
	NSMutableDictionary* _valueBuffer;
	NSDictionary* _initialValues;
	struct {
		unsigned _sharedInstance : 1;
		unsigned _appliesImmediately : 1;
		unsigned _reservedUserDefaultsController : 30;
	}  _userDefaultsControllerFlags;

}

@property (readonly) NSUserDefaults * defaults; 
@property (copy) NSDictionary * initialValues; 
@property (assign) char appliesImmediately; 
@property (readonly) char hasUnappliedChanges; 
@property (readonly) id values; 
+(id)_nonAutomaticObservingKeys;
+(id)_keyValueBindingAccessPoints;
+(id)_modelAndProxyKeys;
+(id)sharedUserDefaultsController;
-(id)init;
-(id)description;
-(id)values;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_init;
-(void)_dealloc;
-(id)_singleValueForKey:(id)arg1 ;
-(id)_singleMutableArrayValueForKey:(id)arg1 ;
-(void)_setSingleValue:(id)arg1 forKey:(id)arg2 ;
-(void)_invokeSingleSelector:(SEL)arg1 withArguments:(id)arg2 onKeyPath:(id)arg3 ;
-(id)_controllerKeys;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(void)save:(id)arg1 ;
-(id)initWithDefaults:(id)arg1 initialValues:(id)arg2 ;
-(void)_setDefaults:(id)arg1 ;
-(void)setInitialValues:(NSDictionary *)arg1 ;
-(char)appliesImmediately;
-(NSUserDefaults *)defaults;
-(NSDictionary *)initialValues;
-(id)_valueBuffer;
-(void)_applyValue:(id)arg1 forKey:(id)arg2 registrationDomain:(id)arg3 ;
-(void)_applyAllValuesFromValueBuffer;
-(void)revert:(id)arg1 ;
-(void)_executeSave:(id)arg1 didCommitSuccessfully:(char)arg2 actionSender:(id)arg3 ;
-(void)setAppliesImmediately:(char)arg1 ;
-(char)hasUnappliedChanges;
-(void)revertToInitialValues:(id)arg1 ;
-(char)_isSharedUserDefaultsControllerProxy;
-(void)_setSharedUserDefaultsControllerProxy:(char)arg1 ;
@end

