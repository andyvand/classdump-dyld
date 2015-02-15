/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABCardView;

@interface AKCardViewDataSourceFactory : NSObject {

	ABCardView* _cardView;

}
+(id)contactWithPerson:(id)arg1 unified:(char)arg2 error:(id*)arg3 ;
-(id)initWithCardView:(id)arg1 ;
-(id)dataSourceWithContact:(id)arg1 addressBook:(id)arg2 delegate:(id)arg3 ;
-(id)dataSourceWithPerson:(id)arg1 unified:(char)arg2 delegate:(id)arg3 ;
-(void)dealloc;
@end

