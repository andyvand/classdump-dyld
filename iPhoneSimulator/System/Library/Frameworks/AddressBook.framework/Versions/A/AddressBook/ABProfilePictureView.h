/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <ImageKit/IKProfilePictureView.h>

@interface ABProfilePictureView : IKProfilePictureView {

	char _loaded;

}

@property (getter=isLoaded) char loaded;              //@synthesize loaded=_loaded - In the implementation block
-(char)pictureSupportsVibrancy;
-(CGSize)intrinsicContentSize;
-(char)allowsVibrancy;
-(char)isLoaded;
-(void)setLoaded:(char)arg1 ;
-(char)translatesAutoresizingMaskIntoConstraints;
@end

