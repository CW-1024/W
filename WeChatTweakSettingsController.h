//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

//#import <WeChatTweak/UIImagePickerControllerDelegate-Protocol.h>
//#import <WeChatTweak/UINavigationControllerDelegate-Protocol.h>

@class MMLoadingView, MMTableViewInfo, NSString, UIImageView;

@interface WeChatTweakSettingsController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    id m_tableViewInfo;
    MMTableViewInfo *tableViewInfo;
    MMLoadingView *loadingView;
    UIImageView *_headerImageView;
}

//- (void).cxx_destruct;
- (void)WeChatTweakAutoDownloadSettingsController;
- (void)WeChatTweakBubbleSettingsController;
- (void)WeChatTweakCssSettingsController;
- (void)WeChatTweakDisableSettingsController;
- (void)WeChatTweakEmojiSettingsController;
- (void)WeChatTweakEnableSettingsController;
- (void)WeChatTweakFontSettingsViewController;
- (void)WeChatTweakPlist;
- (void)WeChatTweakReMsgSettingsController;
- (void)WeChatTweakRedEnvelopesSettingsController;
- (void)WeChatTweakReveiverSettingsController;
- (void)WeChatTweakShortcutSettingsController;
- (void)WeChatTweakVoiceSettingsController;
- (void)addGzh;
- (void)dismissViewController;
- (id)getSavedImage;
- (void)headerImageTapped;
@property(retain, nonatomic) UIImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
- (id)imagePath;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)init;
- (void)presentImagePickerController;
- (void)reloadTableData;
- (void)resetAvatar;
- (void)saveImage:(id)arg1;
- (void)show;
- (void)tapGroup;
- (void)tapOfficial;
- (id)topMostController;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
//@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

