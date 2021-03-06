/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKPhotoPickerControllerDelegate <NSObject>
@required
-(id)supportedMediaTypesForPhotoPicker:(id)arg1;
-(void)photoPickerController:(id)arg1 requestsSendAssets:(id)arg2 sendImmediately:(BOOL)arg3;
-(void)photoPickerControllerRequestPresentPhotoLibrary:(id)arg1;
-(void)photoPickerControllerRequestPresentCamera:(id)arg1;
-(void)photoPickerControllerWillCancel:(id)arg1;

@end

