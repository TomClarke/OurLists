//
//  CreateProfileTableViewController.h
//  DogWalkerPro
//
//  Created by Thomas Clarke on 20/07/2013.
//  Copyright (c) 2013 Thomas Clarke. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CreateProfileViewController;

@protocol CreateProfileViewControllerDelegate <NSObject>

- (void)CreateProfileViewControllerDidSignup:(CreateProfileViewController *)controller;

@end


@interface CreateProfileTableViewController : UIViewController


@property (nonatomic, weak) id<CreateProfileViewControllerDelegate> delegate;



@property (weak, nonatomic) IBOutlet UITextField *Username;
@property (weak, nonatomic) IBOutlet UITextField *Password;
@property (weak, nonatomic) IBOutlet UITextField *Email;


@property (weak, nonatomic) IBOutlet UIButton *Create;


@end
