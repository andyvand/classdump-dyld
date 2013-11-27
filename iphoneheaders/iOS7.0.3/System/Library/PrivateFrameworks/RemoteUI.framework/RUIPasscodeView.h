/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:35 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <RemoteUI/RUIElement.h>
#import <RemoteUI/RUIPasscodeFieldDelegate.h>

@class UIView, UILabel, RUIObjectModel, RUIPasscodeField;

@interface RUIPasscodeView : RUIElement <RUIPasscodeFieldDelegate> {

	UIView* _view;
	UILabel* _label;
	UIView* _footer;
	RUIObjectModel* _objectModel;
	RUIPasscodeField* _passcodeField;

}

@property (assign,nonatomic) RUIObjectModel * objectModel;                    //@synthesize objectModel=_objectModel - In the implementation block
@property (nonatomic,readonly) RUIPasscodeField * passcodeField;              //@synthesize passcodeField=_passcodeField - In the implementation block
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)passcodeField;
-(void)passcodeField:(id)arg1 enteredPasscode:(id)arg2 ;
-(id)objectModel;
-(void)setObjectModel:(id)arg1 ;
-(void)populatePostbackDictionary:(id)arg1 ;
-(void)viewDidLayout;
-(void)submitPIN;
-(void)remoteUILinkFooterActivatedLink:(id)arg1 ;
-(id)passcodeView;
@end
