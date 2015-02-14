/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ABCardViewImageLoading : NSObject {

	long long _backgroundStyle;

}

@property (assign) long long backgroundStyle;              //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
-(id)initWithBackgroundStyle:(long long)arg1 ;
-(id)makeEditModeObservableWithDataSource:(id)arg1 ;
-(id)makeObservableWithDataSource:(id)arg1 ;
-(id)addPhotoImage;
-(id)defaultImageForCompany;
-(id)defaultImageForPerson;
-(id)imageByCroppingImage:(id)arg1 ;
-(id)makeLocalPhotoObservableWithDataSource:(id)arg1 ;
-(id)makePlaceholderObservableWithDataSource:(id)arg1 ;
-(id)makeRemotePhotoObservableWithDataSource:(id)arg1 ;
-(id)makeObservableWithLocalPhotoObservable:(id)arg1 placeholderObservable:(id)arg2 remotePhotoObservable:(id)arg3 ;
-(id)makeAddPhotoObservable;
-(id)makePlaceholderObservableWithInitials:(id)arg1 isCompany:(char)arg2 ;
-(id)imageWithInitials:(id)arg1 ;
-(id)cardViewMonogramOptions;
-(long long)backgroundStyle;
-(void)setBackgroundStyle:(long long)arg1 ;
@end

