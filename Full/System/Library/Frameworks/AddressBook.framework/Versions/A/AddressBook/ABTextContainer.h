/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <UIFoundation/NSTextContainer.h>

@interface ABTextContainer : NSTextContainer {

	CGSize _imageSize;

}
-(CGRect)lineFragmentRectForProposedRect:(CGRect)arg1 sweepDirection:(unsigned long long)arg2 movementDirection:(unsigned long long)arg3 remainingRect:(CGRect*)arg4 ;
-(CGPoint)imageOffset;
-(char)isSimpleRectangularTextContainer;
-(double)offset;
-(void)setImageSize:(CGSize)arg1 ;
-(char)containsPoint:(CGPoint)arg1 ;
-(CGRect)titleRect;
-(CGSize)imageSize;
-(id)initWithContainerSize:(CGSize)arg1 ;
@end

