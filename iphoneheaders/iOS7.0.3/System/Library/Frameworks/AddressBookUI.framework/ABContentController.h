/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:27:30 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABContentControllerProtocol.h>

@class UIView;

@interface ABContentController : NSObject <ABContentControllerProtocol> {

	void* _addressBook;
	id _contentControllerDelegate;
	UIView* _contentLayer;

}

@property (assign,nonatomic) void* addressBook; 
-(id)initWithContentControllerDelegate:(id)arg1 addressBook:(void*)arg2 ;
-(void)back:(BOOL)arg1 save:(BOOL)arg2 ;
-(id)contentControllerDelegate;
-(void)setContentControllerDelegate:(id)arg1 ;
-(void)cleanUpContentLayer;
-(BOOL)contentViewIsVisible;
-(void)preloadController;
-(void)dealloc;
-(id)init;
-(void)reload;
-(id)contentView;
-(void)displayScrollerIndicators;
-(void*)addressBook;
-(void)setAddressBook:(void*)arg1 ;
@end
