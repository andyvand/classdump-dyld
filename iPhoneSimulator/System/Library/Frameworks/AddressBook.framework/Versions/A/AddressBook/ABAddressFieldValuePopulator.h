/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CNPostalAddress;

@interface ABAddressFieldValuePopulator : NSObject {

	CNPostalAddress* _postalAddress;

}

@property (readonly) CNPostalAddress * postalAddress;              //@synthesize postalAddress=_postalAddress - In the implementation block
-(CNPostalAddress *)postalAddress;
-(id)initWithPostalAddress:(id)arg1 ;
-(void)populateAddressFields:(id)arg1 ;
-(id)cardViewTagToValueKeypathMap;
-(id)valueForComponentKeypath:(id)arg1 ;
-(void)dealloc;
@end

