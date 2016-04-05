void light_led(uint8_t pinname, int value, int value_new)
{
        if (value_new>=value)
        {
                // Turn it on                                                                                                         
                bcm2835_gpio_write(pinname, HIGH);
        }
        else
        {
                // turn it off                                                                                                        
                bcm2835_gpio_write(pinname, LOW);
        }
}


