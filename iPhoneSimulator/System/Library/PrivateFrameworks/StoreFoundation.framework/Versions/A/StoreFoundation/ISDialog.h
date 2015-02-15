/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/StoreFoundation.framework/Versions/A/StoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreFoundation/NSSecureCoding.h>

@protocol ISDialogDelegate;
@class NSArray, NSLock, NSString, NSMutableDictionary, NSDictionary, ISDialogButton;

@interface ISDialog : NSObject <NSSecureCoding> {

	char _allowDuplicates;
	char _authorizationIsForced;
	NSArray* _buttons;
	long long _defaultButtonIndex;
	char _dismissOnLock;
	char _expectsResponse;
	char _groupsTextFields;
	long long _kind;
	NSLock* _lock;
	NSString* _message;
	char _oneButtonPerLine;
	NSArray* _textFields;
	NSString* _title;
	NSMutableDictionary* _userInfo;
	NSDictionary* _baseDictionary;
	NSDictionary* _authenticationParameters;
	id<ISDialogDelegate> _delegate;
	ISDialogButton* _okButton;
	ISDialogButton* _cancelButton;
	ISDialogButton* _otherButton;
	ISDialogButton* _suppressionCheckbox;

}

@property (readonly) ISDialogButton * okButton;                                 //@synthesize okButton=_okButton - In the implementation block
@property (readonly) ISDialogButton * cancelButton;                             //@synthesize cancelButton=_cancelButton - In the implementation block
@property (readonly) ISDialogButton * otherButton;                              //@synthesize otherButton=_otherButton - In the implementation block
@property (readonly) ISDialogButton * suppressionCheckbox;                      //@synthesize suppressionCheckbox=_suppressionCheckbox - In the implementation block
@property (readonly) NSDictionary * baseDictionary;                             //@synthesize baseDictionary=_baseDictionary - In the implementation block
@property (retain) NSArray * buttons;                                           //@synthesize buttons=_buttons - In the implementation block
@property (assign) long long defaultButtonIndex;                                //@synthesize defaultButtonIndex=_defaultButtonIndex - In the implementation block
@property (assign) char oneButtonPerLine;                                       //@synthesize oneButtonPerLine=_oneButtonPerLine - In the implementation block
@property (assign) char groupsTextFields;                                       //@synthesize groupsTextFields=_groupsTextFields - In the implementation block
@property (retain) NSArray * textFields;                                        //@synthesize textFields=_textFields - In the implementation block
@property (retain) NSString * message;                                          //@synthesize message=_message - In the implementation block
@property (retain) NSString * title;                                            //@synthesize title=_title - In the implementation block
@property (assign) char allowDuplicates;                                        //@synthesize allowDuplicates=_allowDuplicates - In the implementation block
@property (assign) char authorizationIsForced;                                  //@synthesize authorizationIsForced=_authorizationIsForced - In the implementation block
@property (assign) char dismissOnLock;                                          //@synthesize dismissOnLock=_dismissOnLock - In the implementation block
@property (assign) char expectsResponse;                                        //@synthesize expectsResponse=_expectsResponse - In the implementation block
@property (assign) long long kind;                                              //@synthesize kind=_kind - In the implementation block
@property (readonly) NSDictionary * authenticationParameters;                   //@synthesize authenticationParameters=_authenticationParameters - In the implementation block
@property (readonly) char needsDedicatedUI; 
@property (assign,nonatomic,__weak) id<ISDialogDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(char)supportsSecureCoding;
+(id)dialogWithDictionary:(id)arg1 ;
+(id)dialogWithError:(id)arg1 ;
+(void)dismissDialogWithDictionary:(id)arg1 ;
-(NSArray *)textFields;
-(ISDialogButton *)okButton;
-(id)initWithError:(id)arg1 ;
-(ISDialogButton *)otherButton;
-(id)init;
-(void)setDelegate:(id<ISDialogDelegate>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(void)performAction:(long long)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id<ISDialogDelegate>)delegate;
-(NSArray *)buttons;
-(id)runModal;
-(void)beginSheetModalForWindow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)kind;
-(void)setKind:(long long)arg1 ;
-(ISDialogButton *)cancelButton;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setValue:(id)arg1 forUserInfoKey:(id)arg2 ;
-(char)shouldDismissWithReturnCode:(long long)arg1 userInfo:(id*)arg2 ;
-(ISDialogButton *)suppressionCheckbox;
-(char)authorizationIsForced;
-(NSDictionary *)authenticationParameters;
-(NSDictionary *)baseDictionary;
-(char)needsDedicatedUI;
-(id)initWithDialogDictionary:(id)arg1 ;
-(void)setAuthorizationIsForced:(char)arg1 ;
-(long long)_kindForString:(id)arg1 ;
-(void)setButtons:(NSArray *)arg1 ;
-(void)setExpectsResponse:(char)arg1 ;
-(void)setAllowDuplicates:(char)arg1 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 ;
-(long long)defaultButtonIndex;
-(id)_runModalWithSettings:(id)arg1 ;
-(id)valueForUserInfoKey:(id)arg1 ;
-(void)handleDismissNoficiation:(id)arg1 ;
-(void)stopModalForDialog:(id)arg1 ;
-(id)copyUserNotification;
-(void)dismissDialogWithExitCode:(long long)arg1 ;
-(char)allowDuplicates;
-(void)setDefaultButtonIndex:(long long)arg1 ;
-(char)dismissOnLock;
-(void)setDismissOnLock:(char)arg1 ;
-(char)expectsResponse;
-(char)groupsTextFields;
-(void)setGroupsTextFields:(char)arg1 ;
-(char)oneButtonPerLine;
-(void)setOneButtonPerLine:(char)arg1 ;
-(void)setTextFields:(NSArray *)arg1 ;
-(id)initWithAuthenticationChallege:(id)arg1 ;
@end

