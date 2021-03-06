/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABCardViewProperty.h>

@interface ABCardViewLinkedPeopleProperty : ABCardViewProperty
+(id)localizedLabel;
+(/*^block*/id)linkedPersonComparatorWithAddressBook:(id)arg1 ;
-(char)shouldShowNamesForPeople:(id)arg1 ;
-(id)multiValueWithPersonMapper:(id)arg1 ;
-(id)multiValueFromLinkedPeople:(id)arg1 personMapper:(id)arg2 addressBook:(id)arg3 ;
-(char)isValueEmpty:(id)arg1 ;
-(id)emptyValueForMultiValue:(id)arg1 label:(id)arg2 ;
-(char)shouldReloadViewOnUserEdit;
-(char)allowsCustomLabels;
-(id)nameForPerson:(id)arg1 ;
@end

