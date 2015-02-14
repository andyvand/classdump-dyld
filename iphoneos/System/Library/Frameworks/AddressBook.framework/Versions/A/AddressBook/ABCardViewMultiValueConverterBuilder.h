/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:45 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABCardViewProperty;
@class CNContact, ABCardViewPersonMapper;

@interface ABCardViewMultiValueConverterBuilder : NSObject {

	CNContact* _person;
	ABCardViewPersonMapper* _personMapper;
	id<ABCardViewProperty> _property;
	char _shouldShowPrivateMeFields;
	char _isEditing;

}

@property (assign) char shouldShowPrivateMeFields;              //@synthesize shouldShowPrivateMeFields=_shouldShowPrivateMeFields - In the implementation block
@property (assign) char isEditing;                              //@synthesize isEditing=_isEditing - In the implementation block
-(id)build;
-(id)initWithPerson:(id)arg1 personMapper:(id)arg2 property:(id)arg3 ;
-(void)setShouldShowPrivateMeFields:(char)arg1 ;
-(void)setIsEditing:(char)arg1 ;
-(id)basicConverter;
-(id)transformers;
-(id)readOnlyTransformer;
-(id)accountBadgeTransformer;
-(id)privateFieldTransformer;
-(id)accountNameTransformer;
-(char)shouldShowPrivateMeFields;
-(void)dealloc;
-(char)isEditing;
@end

