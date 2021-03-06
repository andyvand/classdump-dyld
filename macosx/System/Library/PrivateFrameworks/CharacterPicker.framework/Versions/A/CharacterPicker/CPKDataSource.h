/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CharacterPicker.framework/Versions/A/CharacterPicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CPKDataSource <NSObject>
@optional
-(id)descriptionForCategory:(long long)arg1;
-(id)storageIdentifier;
-(long long)initialSelectedCategory;

@required
-(void)prepareDataUsingBlock:(/*^block*/id)arg1;
-(long long)numberOfCategories;
-(id)titleForCategory:(long long)arg1;
-(long long)numberOfCharactersInCategory:(long long)arg1;
-(id)characterAtIndex:(long long)arg1 inCategory:(long long)arg2;
-(id)characterFromIdentifier:(id)arg1;

@end

