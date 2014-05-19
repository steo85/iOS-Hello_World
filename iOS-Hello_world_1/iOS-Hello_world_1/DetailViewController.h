//
//  DetailViewController.h
//  iOS-Hello_world_1
//
//  Created by Steo85 on 19.05.2014.
//  Copyright (c) 2014 Steo85. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
