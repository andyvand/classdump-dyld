/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:43 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABGroupListController, NSArray, NSPasteboard;

@interface ABGroupDragScope : NSObject {

	ABGroupListController* _viewController;
	NSArray* _entries;
	NSPasteboard* _pasteboard;

}

@property (readonly) ABGroupListController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (readonly) NSArray * entries;                                   //@synthesize entries=_entries - In the implementation block
@property (readonly) NSPasteboard * pasteboard;                           //@synthesize pasteboard=_pasteboard - In the implementation block
-(id)initWithListViewController:(id)arg1 entries:(id)arg2 pasteboard:(id)arg3 ;
-(NSPasteboard *)pasteboard;
-(NSArray *)entries;
-(void)dealloc;
-(ABGroupListController *)viewController;
@end

